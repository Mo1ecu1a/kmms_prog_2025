FILES="main.cpp array_utils.cpp sort_algorithms.cpp user_interface.cpp"
APP="bin/2_homework_proga"

mkdir -p bin

g++ $FILES -o $APP

./$APP
