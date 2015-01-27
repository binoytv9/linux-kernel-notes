mkdir img 2> /dev/null	# if folder exists redirecting the error to a file

for i in `find . -name '*.jpg' -size +15k`
do
cp $i img
done
