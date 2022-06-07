/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:01:32 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/07 17:59:28 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
  Harl Karen;
  Karen.complain("DEBUG");
  Karen.complain("INFO");
  Karen.complain("WARNING");
  Karen.complain("ERROR");
}