#!/bin/bash
# Auto sample

i=1

while [ "$i" -lt 39 ] ; do
    cp system/sampleDict.${i} system/sampleDict
    echo "Running sample $i"
    sample -time '0.3'
    i=`expr $i + 1`
done

echo "Done"
