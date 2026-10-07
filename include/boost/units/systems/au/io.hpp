// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2008 Matthias Christian Schabel
// Copyright (C) 2008 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_IO_HPP
#define BOOST_UNITS_AU_IO_HPP

#include <boost/units/io.hpp>
#include <boost/units/reduce_unit.hpp>

#include <boost/units/systems/au.hpp>

namespace boost {

namespace units { 

inline std::string name_string(const reduce_unit<au::electric_charge>::type&) { return "elementary charge"; }
inline std::string symbol_string(const reduce_unit<au::electric_charge>::type&) { return "e"; }

inline std::string name_string(const reduce_unit<au::electric_potential>::type&) { return "hartree per elementary charge"; }
inline std::string symbol_string(const reduce_unit<au::electric_potential>::type&) { return "E_h / e"; }

inline std::string name_string(const reduce_unit<au::energy>::type&) { return "hartree"; }
inline std::string symbol_string(const reduce_unit<au::energy>::type&) { return "E_h"; }

inline std::string name_string(const reduce_unit<au::force>::type&) { return "hartree per bohr"; }
inline std::string symbol_string(const reduce_unit<au::force>::type&) { return "E_h / a0"; }

inline std::string name_string(const reduce_unit<au::magnetic_flux_density>::type&) { return "reduced planck per elementary charge and squared bohr"; }
inline std::string symbol_string(const reduce_unit<au::magnetic_flux_density>::type&) { return "hbar / e a0^2"; }

inline std::string name_string(const reduce_unit<au::pressure>::type&) { return "hartree per cubic bohr"; }
inline std::string symbol_string(const reduce_unit<au::pressure>::type&) { return "E_h / a0^3"; }

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_IO_HPP
