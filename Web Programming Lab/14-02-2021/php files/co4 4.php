<html>
<style>
table{
	
	font-size:20px;
	padding:10px;
	position:relative;
	left:500px;
	
}
</style>
<table border='1'>
<tr><th>Indian Cricket Players</th></tr>
<?php
$var = array('Sachin','Dhoni','Sehwag','Kohli','Rohit','Dhawan','Bumrah','Pant','K L Rahul','Iyer');
foreach($var as $values){
?>               
<tr><td>

<?php   echo"$values";     ?>
</td></tr>
<?php } ?>
</table>


 </html>