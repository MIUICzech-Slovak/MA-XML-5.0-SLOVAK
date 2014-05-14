#!/bin/sh
find . -name "strings.xml" -exec sed -i -e '2i\<!--This Slovak translation is licenced under www.creativecommons.org\/licenses\/by-nc-nd\/3.0\/deed.en by MIUI CZ&SK www.miui.cz-->' {} \; > /dev/null 2>&1

