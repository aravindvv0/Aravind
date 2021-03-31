<h1>Compose Electricity bill from user input based on a given tariff using PHP.</h1>

<html>
<style>

input{

  border:2px solid black;
  width: 100%;
  padding: 12px 20px;
  margin: 8px 0;
  box-sizing: border-box;
}
.hello{
	
border:2px solid black;	
}
table{
	
	font-size:20px;
	padding:10px;
	position:relative;
	left:500px;
	
}
.button{
  background-color: green;
  border: none;
  color: white;
  padding: 16px 32px;
  text-decoration: none;
  margin: 4px 2px;
  cursor: pointer;
}
</style>
<body>
<form method="post" >
<input type="number" name="consumer" placeholder="Valid consumer number"><br>
<input type="number" name="unit" placeholder="Units"><br>

<input type="submit" name="submit"class="button">
</form>
<?php
if(isset($_POST['submit']))
  {
	  function bill($units) {
    $unit_first = 3.50;
    $unit_second = 4.00;
    $unit_third = 5.20;
    $unit_fourth = 6.50;

    if($units <= 50) {
        $bill = $units * $unit_first;
    }
    else if($units > 50 && $units <= 100) {
        $temp = 50 * $unit_first;
        $remaining_units = $units - 50;
        $bill = $temp + ($remaining_units * $unit_second);
    }
    else if($units > 100 && $units <= 200) {
        $temp = (50 * 3.5) + (100 * $unit_second);
        $remaining_units = $units - 150;
        $bill = $temp + ($remaining_units * $unit_third);
    }
    else {
        $temp = (50 * 3.5) + (100 * $unit_second) + (100 * $unit_third);
        $remaining_units = $units - 250;
        $bill = $temp + ($remaining_units * $unit_fourth);
    }
    return number_format((float)$bill, 2, '.', '');
}
$consumer = $_POST['consumer'];
$units = $_POST['unit'];
$conn = mysqli_connect("localhost", "root", "","php");
$res = bill($units);











$sql="select * from bill";
$result=mysqli_query($conn,$sql);
while($rows=mysqli_fetch_assoc($result)){

if($rows['consumerno'] == $consumer){
?>
<div class="hello">
<table>
<tr><th>Electricity Bill</th></tr>
<tr>
<tr></tr>
<tr></tr>
<tr></tr>
<td>Consumer no :</td><td>  <?php echo $rows['consumerno'] ?></td></tr><tr><td>Name :</td><td>  <?php echo $rows['name'] ?></td>
</tr>
<tr><td>Connection Id :</td><td>  <?php echo $rows['connid'] ?></td></tr>
<tr><td>Units :</td><td>  <?php echo $units ?></td></tr>
<tr><td>Amount to pay :</td><td>  <?php echo $res?></td></tr><tr><td>Bill Number :</td><td>  <?php echo $rows['billno'] ?></td></tr>

<tr><td>Bill Date :</td><td>  <?php echo $rows['Date'] ?></td></tr>
<tr><td>Due Date :</td><td>  <?php echo $rows['Duedate'] ?></td></tr>
  <?php }}} ?>
</table>
</div>
</body>
</html>