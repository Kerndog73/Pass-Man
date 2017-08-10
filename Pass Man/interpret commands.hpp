//
//  interpret commands.hpp
//  Pass Man
//
//  Created by Indi Kernick on 10/8/17.
//  Copyright © 2017 Indi Kernick. All rights reserved.
//

#ifndef interpret_commands_hpp
#define interpret_commands_hpp

#include "passwords.hpp"
#include <experimental/optional>
#include <experimental/string_view>

class CommandInterpreter {
public:
  CommandInterpreter() = default;
  
  void interpret(std::experimental::string_view);

private:
  size_t key = 0;
  std::string file;
  std::experimental::optional<Passwords> passwords;
};

#endif