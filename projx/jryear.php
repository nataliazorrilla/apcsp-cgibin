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

	<h2> Your Name: </h2>	
	<?php
		$file = "name.txt";
		if(file_exists($file))
		{
			echo file_get_contents($file);
		}
	 ?>
	<br>

        <h2> Your Main Extracurricular: </h2>   
        <?php
                $file = "ec.txt";
                if(file_exists($file))
                {
                        echo file_get_contents($file);
                }
         ?>
	<br>

        <h2> Your Date Location: </h2>   
        <?php
                $file = "date.txt";
                if(file_exists($file))
                {
                        echo file_get_contents($file);
                }
         ?>
        <br>

        <h2> Your Secret Santa Gift: </h2>   
        <?php
                $file = "gift.txt";
                if(file_exists($file))
                {
                        echo file_get_contents($file);
                }
         ?>
        <br>

        <h2> Your Poem: </h2>   
        <?php
                $file = "poem.txt";
                if(file_exists($file))
                {
                        echo file_get_contents($file);
                }
         ?>
        <br>

        <h2> Your Promposal: </h2>   
        <?php
                $file = "promposal.txt";
                if(file_exists($file))
                {
                        echo file_get_contents($file);
                }
         ?>
        <br>

        <h2> Your AP Score: </h2>   
        <?php
                $file = "score.txt";
                if(file_exists($file))
                {
                        echo file_get_contents($file);
                }
         ?>
        <br>
    
  </body>
</html>
