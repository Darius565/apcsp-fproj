<!DOCTYPE html>
<html>
  <head>
    <title>Morse Translator</title>
	<link rel="stylesheet" type="text/css" href="morseLight.css" />
  <body>

    <h1>C Project - Morse Translator</h1>
    <p>Type a word or a phrase into the textbox below and then press enter or go to have it translated!</p>

    <?php
       // define variables and set to empty values
       $str = $output = $retc = "";

       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $str = test_input($_POST["str"]);
         exec("/usr/lib/cgi-bin/sp1a/final " . $str ., $output, $retc); 
       }

       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Input: <input type="text" name="str"><br>
      <br>
      <input type="submit" value="Go!">
    </form>

    <?php
       // only display if return code is numeric - i.e. exec has been called
       if (is_numeric($retc)) {
         echo "<h2>Your Input:</h2>";
         echo $str;
         echo "<br>";
       
         echo "<h2>Program Output (an array):</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
       
         echo "<h2>Program Return Code:</h2>";
         echo $retc;
       }
    ?>
    
  </body>
</html>
