#!/usr/bin/env bash
set -e

SCRIPT_PATH=`dirname $0`

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


# mv ~/Downloads/ergodox_ez_ergodox-mini-0-1-5_aegvO_xL3nx.zip .
# gst
# unzip ergodox_ez_ergodox-mini-0-1-5_aegvO_xL3nx.zip
# rm ergodox_ez_ergodox-mini-0-1-5_aegvO_xL3nx.zip
# Ls
# gst
# nvim README.md
# mkdir ergodox-mini
# Ls
# gst
# mkdir keymaps/ergodox-mini
# mv ergodox_ez_ergodox-mini-0-1-5_source/* keymaps/ergodox-mini
# mv README.md keymaps/ergodox-mini
# gst
# rm ergodox_ez_ergodox-mini-0-1-5_aegvO_xL3nx.md5
# gst
# mv ergodox_ez_ergodox-mini-0-1-5_aegvO_xL3nx.hex keymaps/ergodox-mini
# ..
# gst
# ../../
# gst
# cd zsa_qmk_firmware/
# gst
# nvim etc/update-keymap-from-zip.sh
# rmdir keyboards/moonlander/ergodox_ez_ergodox-mini-0-1-5_source
# gst
