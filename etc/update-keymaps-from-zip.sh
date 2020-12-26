#!/usr/bin/env bash
set -e
shopt -s nullglob

SCRIPT_PATH=`dirname $0`
ROOT_DIR=$SCRIPT_PATH/..

DOWNLOADS=~/Downloads

process_zip()
{
  ZIP_DIR=$1
  KEYBOARD=$2
  KEYMAP_DIR=$3
  shift; shift; shift;
  # Having args shifted, the rest is now comments ...
  COMMENTS=$@

  echo Process $DOWNLOADS/${NAME}_\*.zip downloads for $KEYBOARD
  echo $COMMENTS
  for zip_file in $DOWNLOADS/${KEYBOARD}_*.zip; do
      base_name=`basename ${zip_file}`

      # zip_file=~/Downloads/moonlander_classic-moonlander-3-0_7JaNr_b7nzg.zip
      # base_name=
      # | sed - extract the keymap name from the file name (part after $NAME,
      # surrounded by underscores moonlander_{keymap}_7JaNr_b7nzg.zip
      keymap=$(echo ${base_name} | sed -n 's#'"${KEYBOARD}"'_\([^_]*\).*\.zip$#\1#p')
      echo Keymap: $keymap

      keymap_dir=$ROOT_DIR/keyboards/$KEYMAP_DIR/keymaps/$keymap
      mkdir -p $keymap_dir

      # Archive structure:
      # README.md
      # planck_ez_glow_planck-symmetric_bdgLp_yGg3r.bin
      # planck_ez_glow_planck-symmetric_source
      # build.log
      # planck_ez_glow_planck-symmetric_bdgLp_yGg3r.md5
      source=${KEYBOARD}_${keymap}_source
      echo source: $source

      # -o - overwrite files without prompt
      # -j - do not preserve file paths in the archive
      # $zip_file - zip file to extract
      # $source/* - files to include
      # -d $keymap_dir - dir to extract to
      unzip -o -j $zip_file README.md build.log $source/\* -d $keymap_dir

  done
}

NAME=ergodox_ez
KEYMAP_DIR=$NAME
process_zip $DOWNLOADS $NAME $KEYMAP_DIR
echo

NAME=moonlander
KEYMAP_DIR=$NAME
process_zip $DOWNLOADS $NAME $KEYMAP_DIR
echo

NAME=planck_ez_glow
KEYMAP_DIR=planck
process_zip $DOWNLOADS $NAME $KEYMAP_DIR
echo 
