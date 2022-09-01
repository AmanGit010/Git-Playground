<?php
echo"WAP to demonstrate the scalar(int ,float ,string ,boolean) and 
composite data type(array).<br><br>";

echo"SCALAR<br>";
$a=12;
$b=19.5;
$c="JOSHUA";

echo"int= $a<br>";
echo var_dump($a)."<br><br>";

echo"float= $b<br>";
echo var_dump($b)."<br><br>";

echo"STRING= $c<br>";
echo var_dump($c)."<br><br>";

if($c=="JOSHUA")
	$d="true";
else
	$d="false";

echo"BOOLEAN = $d<br><br><hr>";
echo"COMPOSIT<br>";

$e=array("ok","good","bad");

echo"<br>ARRAY<br>";
echo var_dump($e)."<br>";
print_r($e);
?>
