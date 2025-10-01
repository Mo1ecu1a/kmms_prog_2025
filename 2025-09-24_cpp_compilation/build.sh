MAIN=main.cpp
APP=sort_program

if [ -f $APP ]; then rm $APP
fi

g++ $MAIN array_utils.cpp sorti.cpp -o $APP

./$APP
