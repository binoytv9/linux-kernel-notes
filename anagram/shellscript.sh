filename=/usr/share/dict/words	# path to the filename
numberOfWords=5			# number of anagrams per signature

cat $filename | tr 'A-Z' 'a-z' | ./sign.out | sort | ./sameline.out | awk '{if(NF=='$numberOfWords')print}'
