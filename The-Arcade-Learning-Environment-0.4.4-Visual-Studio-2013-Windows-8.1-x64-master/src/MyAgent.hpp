/* *****************************************************************************
* A.L.E (Arcade Learning Environment)
* Copyright (c) 2009-2013 by Yavar Naddaf, Joel Veness, Marc G. Bellemare and
*   the Reinforcement Learning and Artificial Intelligence Laboratory
* Released under the GNU General Public License; see License.txt for details.
*
* Based on: Stella  --  "An Atari 2600 VCS Emulator"
* Copyright (c) 1995-2007 by Bradford W. Mott and the Stella team
*
*
* *****************************************************************************
*  MyAgent.hpp
*
* The implementation of the MyAgent class.
**************************************************************************** */

#ifndef __MY_AGENT_HPP__
#define __MY_AGENT_HPP__

#include "../common/Constants.h"
#include "PlayerAgent.hpp"
#include "../emucore/OSystem.hxx"
#include "ale_state.hpp"
#include "stella_environment.hpp"

class MyAgent : public PlayerAgent {
public:
   MyAgent(OSystem * _osystem, RomSettings * _settings);
   friend class ALEInterface;

protected:
   /* *********************************************************************
   Returns the best action from the set of possible actions
   ******************************************************************** */
   virtual Action act();
};

#endif // __MY_AGENT_HPP__
