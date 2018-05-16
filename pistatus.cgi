#!/bin/bash


echo -e "Content-type: text/html\n\n"
echo "<head><title>Individual RPI Status</title><link rel="stylesheet" href="/student4/snazzycss.css"></head>"
echo "<nav><ul><li><a href="/student4/index.html">About Us</a></li><li><a href="/student4/reference.html">Linux Reference</a></li><li><a href="/cgi-bin/student4/rpistatus.cgi">RPI Pinger</a></li><li><strong>Individual RPI Status</strong></li></ul></nav>"
echo "<h1 align="center">Raspberry Pi Status: $(hostname)</h1>"

echo "<h2>Host Info</h2>"
echo "<li>Host name : $(hostname)</li>"
echo "<li>IP Address: $(hostname -I)</li>"
echo "<li>OS name:    $(grep PRETTY_NAME /etc/os-release | sed 's/.*"\(.*\)"/\1/')</li>"

echo "<h2>Who is logged in</h2>"
echo "<pre>$(who -a)</pre>"

echo "<h2>Performance Summary</h2>"
echo "<pre>$(top -bn1 | head -n 5)</pre>"

echo "<h2>Top 5 Processes by CPU</h2>"
echo "<pre>$(ps -aux --sort=-pcpu --columns 90 | head -n 6)</pre>"

echo "<h2>Top 5 Processes by Memory</h2>"
echo "<pre>$(ps -aux --sort=-pmem --columns 90 | head -n 6)</pre>"


