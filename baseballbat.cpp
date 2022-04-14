#include "baseballbat.h"

BaseballBat::BaseballBat()
{

}
void BaseballBat::use(Actor& actor){
    actor.health -=2;
}
