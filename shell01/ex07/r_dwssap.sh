#!/bin/sh
cat /etc/passwd | 
awk -F : '{print $1}' |
grep -v "#" |
sed '1~2d' | 
rev | sort -r |
sed -n "$FT_LINE1 $FT_LINE2 p" | 
tr '\n' ',' | sed 's/,/, /g' |
sed -r 's/, $/./g'
