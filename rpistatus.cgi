#!/bin/bash

echo -e "Content-type: text/html\n\n"
echo "<head><title>RPI Pinger</title><link rel="stylesheet" href="/student4/snazzycss.css"></head>"
echo "<nav><ul><li><a href="/student4/index.html">About Us</a></li><li><a href="/student4/reference.html">Linux Reference</a></li><li><strong>RPI Pinger</strong></li><li><a href="/cgi-bin/student4/pistatus.cgi">Individual RPI Status</a></li></ul></nav>"
echo "<h1 align="center">RPI Status Checker</h1>"

echo "<pre>$(./rpistatus)</pre>"

//test
