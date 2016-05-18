#ifndef __TIME_H__
#define __TIME_H__

#include <string>

/**
 * This class manages time and the additional and subtraction of time values.
 */
class Time
{
   public:
      /** 
       * Default constructor. Time is set to 0 
       */
      Time();

      /**
       * Time constructor that takes elapsed number of seconds since the epoch
       * @param seconds the number of seconds since the epoch
       */
      Time( int seconds );

      /**
       * Return a string version of the time in the format hh:mm
       * @return string representation of the time in hh:mm since the epoch
       */
      std::string str() const;

      void operator>>(Time);

      int getSeconds();


   private:
      /**
       * Number of seconds since the epoch
       */
      int seconds;

};

#endif
