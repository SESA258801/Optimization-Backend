/**
 * mindc examples
 *
 * Copyright (C) 2010 STMicroelectronics
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 * Contact: mind@ow2.org
 *
 * Authors: Matthieu Leclercq
 */

// -----------------------------------------------------------------------------
// Implementation of the entryPoint interface with signature boot.Main.
// -----------------------------------------------------------------------------

// int main(int argc, string[] argv)
int METH(main, main) (int argc, char *argv[]) {

  // call the 'print' method of the 's' client interface.
  CALL(s[0], print)("hello world !");

  // call again the same interface to look at invocation count
  CALL(s[0], println)("goodbye world");
  
  // call the 'print' method of the 's2' client interface.
  CALL(s[1], print)("hello world !");

  // call again the same interface to look at invocation count
  CALL(s[1], println)("goodbye world");

  return 0;
}
