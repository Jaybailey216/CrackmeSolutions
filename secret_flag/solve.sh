#!/bin/bash


FILE=/tmp/secret
if [ ! -f "$FILE" ]; then
        echo "$FILE does not exist. Creating $FILE with deadbeef"
        echo -n -e "\xDE\xAD\xBE\xEF" > /tmp/secret
fi

for i in {1..126}
do
        echo "i " $i
        FLAG_OUT=$(./secret_flag.bin $i | head -1)
        echo $FLAG_OUT
        echo $FLAG_OUT | xxd -r -p
        printf "\n"
done
