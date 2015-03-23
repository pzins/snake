# snake
Snake game C++ SFML

To compile : Download SFML 2.2 : http://www.sfml-dev.org/download/sfml/2.2/index-fr.php
extract and copy the repo SFML where you want.

add the path to your env : export LD_LIBRARY_PATH=where_you_copied_the_sfml_repos/lib
          example : export LD_LIBRARY_PATH=/home/pierre/SFML/lib


*********************************************************************************************************************
in the makefile : put your path to SFML lib instead of what is written

... -L where_you_copied_the_sfml_repos/lib/
... -I where_you_copied_the_sfml_repos/include

	
*********************************************************************************************************************	

To start the Game : 
      go to your snake repos  
      command : make
