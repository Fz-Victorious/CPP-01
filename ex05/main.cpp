/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 07:35:24 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 18:10:27 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
 
int main()  
{
  Harl ob;
  std::string HarlLevels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

  for(int i = 0; i < 4 ; i++)
  {
	  ob.complain(HarlLevels[i]);
  }
  return 0; 
}
