#!/usr/bin/env bash
set -e

SCRIPT_PATH=`dirname $0`
QMK=$SCRIPT_PATH/../bin/qmk

$QMK flash -kb mitosis -km mitosis_mini
