#pragma once

namespace race
{

const int CAMEL_SPEED = 10;
const int CAMEL_MOVE_TO_REST = 30;
const int CAMEL_FIRST_REST = 5;
const int CAMEL_STANDART_REST = 8;

const int CAMEL_RUNNER_SPEED = 40;
const int CAMEL_RUNNER_MOVE_TO_REST = 10;
const int CAMEL_RUNNER_FIRST_REST = 5;
const double CAMEL_RUNNER_SECOND_REST = 6.5;
const int CAMEL_RUNNER_STANDART_REST = 8;

const int CENTAUR_SPEED = 15;
const int CENTAUR_MOVE_TO_REST = 8;
const int CENTAUR_REST = 2;

const int BOOTS_SPEED = 6;
const int BOOTS_MOVE_TO_REST = 60;
const int BOOTS_FIRST_REST = 10;
const int BOOTS_STANDART_REST = 5;

const int CARPET_SPEED = 10;
const int CARPET_RID_LESS_1000 = 0;
const int CARPET_RID_LESS_5000 = 3;
const int CARPET_RID_LESS_10000 = 10;
const int CARPET_RID_MOREEQ_10000 = 5;

const int EAGLE_SPEED = 8;
const int EAGLE_RID = 6;

const int BROOM_SPEED = 20;
const int BROOM_RID_PERCENT_PER_1000 = 1;

double decreaseRatio(double persent);

}



