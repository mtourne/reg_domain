#!/bin/bash

FILENAME=effective_tld_names.dat
NEW=new.dat

if [ -e $NEW ]; then
    echo "File $NEW exists, not downloading."
    echo
else
    wget 'http://src.chromium.org/svn/trunk/src/net/base/effective_tld_names.dat' -O $NEW
fi

echo "==================================="
echo "Diff $FILENAME $NEW"
echo

diff $FILENAME $NEW
if [ $? -eq 0 ]; then
    echo "==================================="
    echo "New file has no difference, Exiting."
    exit 0;
fi

echo
read -p "Do you wish to apply new file [N/y]" wish

if [ "$wish" = "y" ]; then
    echo
    echo "Replacing $FILENAME with $NEW"
    mv $NEW $FILENAME

    echo
    echo "Generating"

    php generateEffectiveTLDs.php php  > PHP/effectiveTLDs.inc.php
    php generateEffectiveTLDs.php perl > Perl/effectiveTLDs.pm
    php generateEffectiveTLDs.php c    > C/tld-canon.h
fi
