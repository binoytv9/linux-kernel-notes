filename=/usr/share/dict/words	# path to the filename
hashValue=230			# the hash value for which number of count is needed

cat $filename | ./hash | sort | ./sameline | ./count $hashValue
