echo "enter the limit"
read n
echo "The fibonacci series of $n is"
f=0
s=1
if(($n==1))
then
echo $f
fi
if(($n==2))
then
echo $f
echo $s
fi
for((i=2;i<n;i++))
do
new=$((f+s))
echo $new
f=$s
s=$new
done
