#ifndef BOOST_UNITS_AU_LENGTH_HPP
#define BOOST_UNITS_AU_LENGTH_HPP

#include <boost/units/systems/au/base.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<length_dimension,au::system>    length;
    
BOOST_UNITS_STATIC_CONSTANT(bohr_radius,length);  
BOOST_UNITS_STATIC_CONSTANT(bohrradius,length); 
BOOST_UNITS_STATIC_CONSTANT(bohr,length);  
BOOST_UNITS_STATIC_CONSTANT(a0,length); 

} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_LENGTH_HPP
