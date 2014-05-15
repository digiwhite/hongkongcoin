#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/hongkongcoin.png
ICON_DST=../../src/qt/res/icons/hongkongcoin.ico
convert ${ICON_SRC} -resize 16x16 hongkongcoin-16.png
convert ${ICON_SRC} -resize 32x32 hongkongcoin-32.png
convert ${ICON_SRC} -resize 48x48 hongkongcoin-48.png
convert hongkongcoin-16.png hongkongcoin-32.png hongkongcoin-48.png ${ICON_DST}

