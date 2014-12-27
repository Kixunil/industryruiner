Industry ruiner
===============

This little program will ruin any intellectual property based industry in a while.

How it works
------------

Program reads 4B part of file protected by copyright laws (parts of files protected by copyright laws are also protected by copyright laws). It then copies it from processor A register to B register and then from B register to A register in infinite loop. According to standard calculation of production companies, this should make huge damage to author of said file. If you run the program long enough, you will ruin the author.

Warning
-------

This program is dangerous. It was written as a proof-of-concept for educational purpose only. Do NOT run it on any file!

IF YOU RUN IT, YOU ARE RESPONSIBLE FOR ALL DAMAGE IT DOES!

Seriously, I voluntarily tried to run it with MY OWN file and I'm broke now.

Attribution
-----------

Project inspired by [Rudolf Bender Kodnar](https://www.facebook.com/menejstatu/posts/977903935557603)

Bugs
----

* Program doesn't check return values. If you provide non-existing path, it will copy just zeroes.
* No support for files bigger than 2 GiB.
* Single threaded - it could ruin author faster if it was multi threaded.
