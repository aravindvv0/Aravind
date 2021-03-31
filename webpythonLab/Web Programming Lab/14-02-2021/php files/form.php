<?php

$conn = mysqli_connect("localhost", "root", "","php");


if(isset($_POST['submit']))
  {
	  

$name=$_POST['name'];
$email=$_POST['email'];
$date = $_POST['dob'];
$dob=date('Y-m-d',strtotime($date));
$phno = $_POST['phno'];
$gender = $_POST['gender'];
$address = $_POST['address'];
$sql="INSERT INTO form(Name,Email,Phno,Dob,Gender,Address) VALUES('$name','$email',$phno,'$dob','$gender','$address')";
$query = mysqli_query($conn,$sql);
if($query){
	?><p style="color:red;"><?php echo"Elements are Inserted into table form";?></p><?php
	
}

  }
?>

<html>
<head>

<style>
input{

  border:2px solid black;
  width: 100%;
  padding: 12px 20px;
  margin: 8px 0;
  box-sizing: border-box;
}
button{
  background-color: green;
  border: none;
  color: white;
  padding: 16px 32px;
  text-decoration: none;
  margin: 4px 2px;
  cursor: pointer;
}


select{
  border:2px solid black;
  width: 100%;
  padding: 12px 20px;
  margin: 8px 0;
  box-sizing: border-box;
	
}



</style>
<script>
function Validate() {
  var email = document.getElementById('email').value
  var validRegex = /^[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,63}$/;

  if (email.match(validRegex)) { 
   var phoneno = /^\(?([0-9]{3})\)?[-. ]?([0-9]{3})[-. ]?([0-9]{4})$/;
   var ph = document.getElementById("Ph").value
  if(ph.match(phoneno))
        {
          var dt = document.getElementById("dt").value
   
   if("1972/01/01" < dt)
        { 
		 return true;
		}
      else
        {
        alert("Age should be less than 50");
		return false;
        }
        }
      else{
        alert("Invalid Phone number");
		return false;
        }
  
      }
	  else {
     alert("Invalid Email");
	 return false;}
  
  
}
</script>
</head>
<body>
<h1>Form with Validation and Database Insertion</h1>
<form  method="post" >
<input type="text" name="name" placeholder="Name"><br>
<input type="email" name="email"placeholder="Email"id="email"><br>
<input type="number" name="phno"placeholder="Phone Number"id="Ph"><br>
<input type="date" name="dob" placeholder="Date of birth"id="dt"><br>

<textarea name="address" placeholder="Address"style="width: 100%;
  height: 150px;
  padding: 12px 20px;
  box-sizing: border-box;
  border: 2px solid black;
  border-radius: 4px;
  
  resize: none;"></textarea>




<select name="gender">
<option value="Male">Male</option>
<option value="Female">Female</option>
<option value="Other">Other</option>
</select>


<input type="submit" name="submit"onclick="return Validate()">
</form>



</body>
</html>

