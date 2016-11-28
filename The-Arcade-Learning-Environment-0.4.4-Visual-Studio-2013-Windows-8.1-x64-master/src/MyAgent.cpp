/* *****************************************************************************
* A.L.E (Arcade Learning Environment)
* Copyright (c) 2009-2013 by Yavar Naddaf, Joel Veness, Marc G. Bellemare and
*   the Reinforcement Learning and Artificial Intelligence Laboratory
* Released under the GNU General Public License; see License.txt for details.
*
* Based on: Stella  --  "An Atari 2600 VCS Emulator"
* Copyright (c) 1995-2007 by Bradford W. Mott and the Stella team
*
* *****************************************************************************
*  MyAgent.cpp
*
* The implementation of the MyAgent class.
**************************************************************************** */

#include "MyAgent.hpp"
#include "random_tools.h"
#include "ale_interface.hpp"
//ALEInterface ale;

MyAgent::MyAgent(OSystem* _osystem, RomSettings* _settings) :
PlayerAgent(_osystem, _settings) {
}

Action MyAgent::act() {
   //Action action = choice(&available_actions);
   //reward_t reward = ALEInterface::act(action);
   return choice(&available_actions);
   //return PLAYER_A_UP;
}

