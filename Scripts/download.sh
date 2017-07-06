#!/bin/bash
set -ev

zipfile=j2objc-1.1

# sha1_checksum=6f2f45b323ef92cc8d1b13dd789aebd1ab87562f

echo "fetching j2objc dist"
curl -OL http://cocoas.oss-cn-hangzhou.aliyuncs.com/${zipfile}.zip

# echo "${sha1_checksum}  j2objc-${j2objc_version}.zip" | shasum -c

unzip -o -q ${zipfile}.zip
mv ${zipfile} Distributive

echo "Creating framework"
mkdir Cache
mv ${zipfile}.zip Cache/${zipfile}.zip

mkdir Frameworks
mkdir Frameworks/j2objc.framework
cp -a Scripts/Template/* Frameworks/j2objc.framework/
cp Distributive/lib/libjre_emul.a Frameworks/j2objc.framework/j2objc
