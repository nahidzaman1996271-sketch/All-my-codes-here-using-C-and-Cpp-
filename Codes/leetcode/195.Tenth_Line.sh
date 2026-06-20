count = 0 # numbers of lines we area t inside a file

while read line; do
    let 'count = count + 1'

    if [ $count -eq 10]; then
        echo $line
        exit 0
    fi
done < file.txt