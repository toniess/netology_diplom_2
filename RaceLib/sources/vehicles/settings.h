#pragma once

namespace race
{

#define CAMEL_SPEED 10
#define CAMEL_MOVE_TO_REST 30
#define CAMEL_FIRST_REST 5
#define CAMEL_STANDART_REST 8

#define CAMEL_RUNNER_SPEED 40
#define CAMEL_RUNNER_MOVE_TO_REST 10
#define CAMEL_RUNNER_FIRST_REST 5
#define CAMEL_RUNNER_SECOND_REST 6.5
#define CAMEL_RUNNER_STANDART_REST 8

#define CENTAUR_SPEED 15
#define CENTAUR_MOVE_TO_REST 8
#define CENTAUR_REST 2

#define BOOTS_SPEED 6
#define BOOTS_MOVE_TO_REST 60
#define BOOTS_FIRST_REST 10
#define BOOTS_STANDART_REST 5

#define CARPET_SPEED 10
#define CARPET_RID_LESS_1000 0
#define CARPET_RID_LESS_5000 3
#define CARPET_RID_LESS_10000 10
#define CARPET_RID_MOREEQ_10000 5

#define EAGLE_SPEED 8
#define EAGLE_RID 6

#define BROOM_SPEED 20
#define BROOM_RID_PERCENT_PER_1000 1

double increaseRatio(double persent);

double decreaseRatio(double persent);

}



