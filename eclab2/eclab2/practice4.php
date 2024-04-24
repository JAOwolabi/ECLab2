<?php
$size = $_POST["size"];

for ($i = 0; $i <= $size; $i++) {
    if ($i == 0) {
        echo "<table border=1><tr><td></td>";
        for ($j = 1; $j <= $size; $j++) {
            echo "<td>$j</td>";
        }
        echo "</tr>";

        continue;
    }

    echo "<tr>";
    for ($j = 0; $j <= $size; $j++) {
        if ($j == 0) {
            echo "<td>$i</td>";
        } else {
            echo "<td>", $i * $j, "</td>";
        }
    }
    echo "</tr>";
}
?>