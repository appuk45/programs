echo "Enter a number : "
read n
function prime
{
for((i=2; i<n/2; i++))
do
  if [ $((n%i)) -eq 0 ]
  then
	echo "$n is not a prime number."
	exit
  fi
done
echo "$n is a prime number."
}
r=`prime $number`
echo "$r"

