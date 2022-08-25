cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d: -f1 | rev | sort -r | sed "${FT_LINE1},${FT_LINE2}!d" | tr '\n' ',' | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev | tr -d '\n' 
