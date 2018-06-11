<!DOCTYPE html>
<html>
  <head>
    <title> Junior Year: Your Yearbook</title>
  	<link rel="stylesheet" href="/student4/snazzycss.css"> 
</head>


  <body>

<nav><ul><li><a href="/student4/index.html">About Us</a></li><li><a href="/student4/reference.html">Linux Reference</a></li><li><a href="/cgi-bin/student4/rpistatus.cgi">RPI Pinger</a></li><li><a href="/cgi-bin/student4/pistatus.cgi">Individual RPI Status</a></li><li><strong>Yearbook</strong></li></ul></nav>

    <h1 align="center">Junior Year: Your Yearbook</h1>
	<p>Ah, memories. What did you do this year? Let's see if you actually answered my questions genuinely.</p>
	
	<?php
		$file = "yearbook.txt";
		if(file_exists($file))
		{
			echo file_get_contents($file);
		}
	 ?>
    
  </body>
</html>
