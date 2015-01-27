filename=/usr/share/dict/words	# path to the filename
numberOfWords=5			# number of anagrams per signature

cat $filename | tr 'A-Z' 'a-z' | ./sign | sort | ./sameline | awk '{if(NF=='$numberOfWords')print}'
