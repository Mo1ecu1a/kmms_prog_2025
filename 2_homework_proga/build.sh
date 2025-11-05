MAIN=main.cpp
APP=2_homework_proga

if [ -f $APP ]; then rm $APP
fi

g++ $MAIN array_utils.cpp sort_algorithms.cpp user_interface.cpp -o $APP

./$APP