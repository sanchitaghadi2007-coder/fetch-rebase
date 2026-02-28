<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h3>This is HTML PART</h3>
    <?php
    $name="Ajay";
    $a=5; $b=7;
    $c=$a+$b;

    $host="localhost"; $user="root";
    $password="";
    $database="testdb";
    $sql="select name from student";
    $connection=mysqli_connect($host,$user,$password,$database);

    if(!$connection)
        die("Connection failed...");

    echo "Connected to MYSQL <br>";

    $result=$connection->query($sql);
$allnames=[];$i=0;
    while($row=$result->fetch_assoc()){
        $allnames[$i++]=$row["name"];

        echo "<h3 style='color:red'>".$row["name"]."</h3><br>";
    }
    sortFruits($allnames);

    echo "<h1>Hello World</h1>";
    echo "C=". $c ."<br>";
    echo "Name =".$name ."<br>";
    if($a>$b)
        echo $a." is bigger";
    else
        echo $b." is bigger";
    echo "<br> For Loop Demo <br>";
    for($i=0;$i<10;$i++)
        if($i%2==0)
        echo $i. " "."<br>";

function sortFruits($fruits){
    for($i=0;$i<count($fruits);$i++)
        for($j=0;$j<count($fruits)-$i-1;$j++)
    if($fruits[$j]>$fruits[$j+1])
    {
        $temp=$fruits[$j];
        $fruits[$j]=$fruits[$j+1];
        $fruits[$j+1]=$temp;

    }
    echo "<br> Sorted List<br>";
    foreach($fruits as $fruit)
        echo $fruit." ";
echo "<br>";

}

    $fruits=["Banana","Orange","Grapes","Apple"];
    sortFruits($fruits);
    for($i=0;$i<count($fruits);$i++)
        echo $fruits[$i]." ";
    foreach($fruits as $fruit)
        echo $fruit." ";

    ?>
</body>
</html>