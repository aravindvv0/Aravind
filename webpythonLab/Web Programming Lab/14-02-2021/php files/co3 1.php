<style>
table, th, td{
	
	font-size:20px;
	padding:10px;
	
	border: 1px solid black;
	border-collapse:collapse;
	
}

</style>
<body>
<h1>1. Develop a PHP program to connect to a database and retrieve data from a table and
show the details in a neat format. </h1>
<?php

$db = mysqli_connect("localhost", "root", "","php");
$sql="select * from new";
$result=mysqli_query($db,$sql);
if(mysqli_num_rows($result)>0){

?>
<div style="position:relative;left:500px;">
<table><tr>
<th>Name</th><th>Course</th><th>Batch</th><th>RollNo</th>
</tr>
<tr></tr>
<tr></tr>
<tr></tr>
<?php
while($row=mysqli_fetch_assoc($result)){
?>
<tr>
<td><?php echo $row["Name"];?></td>
<td><?php echo $row["Course"];?></td>
<td><?php echo $row["Batch"];?></td>
<td><?php echo $row["Rollno"];?></td>
</tr>
<?php 
}}
?>
</table>
</div>
</body>