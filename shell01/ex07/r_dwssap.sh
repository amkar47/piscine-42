cat /etc/passwd | grep "*"|cut -d: -f1 | sed -n 'n;p' | rev | sort -r | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'NR>= FT_LINE1 && NR<= FT_LINE2 {print$0}'| tr '\n' ',' |sed '$ s/.$//' |sed 's/,/, /' | tr '\n' '.'
