 echo "enter three numbers to compare"
read a
read b
read c
if [ $a -lt $b ]
then
    if [ $c -lt $b ]
    then
        echo "$b is larger"
    else
        echo "$c is larger"
    fi        
else
    if [ $c -lt $a ]
    then
        echo "$a is larger"
    else
        echo "$c is larger"
    fi
fi           