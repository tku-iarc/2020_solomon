// Generated by gencpp from file aruco_hand_eye/hand_eye_calibrationResponse.msg
// DO NOT EDIT!


#ifndef ARUCO_HAND_EYE_MESSAGE_HAND_EYE_CALIBRATIONRESPONSE_H
#define ARUCO_HAND_EYE_MESSAGE_HAND_EYE_CALIBRATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace aruco_hand_eye
{
template <class ContainerAllocator>
struct hand_eye_calibrationResponse_
{
  typedef hand_eye_calibrationResponse_<ContainerAllocator> Type;

  hand_eye_calibrationResponse_()
    : is_done(false)
    , end2cam_trans()  {
    }
  hand_eye_calibrationResponse_(const ContainerAllocator& _alloc)
    : is_done(false)
    , end2cam_trans(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _is_done_type;
  _is_done_type is_done;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _end2cam_trans_type;
  _end2cam_trans_type end2cam_trans;





  typedef boost::shared_ptr< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct hand_eye_calibrationResponse_

typedef ::aruco_hand_eye::hand_eye_calibrationResponse_<std::allocator<void> > hand_eye_calibrationResponse;

typedef boost::shared_ptr< ::aruco_hand_eye::hand_eye_calibrationResponse > hand_eye_calibrationResponsePtr;
typedef boost::shared_ptr< ::aruco_hand_eye::hand_eye_calibrationResponse const> hand_eye_calibrationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator1> & lhs, const ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.is_done == rhs.is_done &&
    lhs.end2cam_trans == rhs.end2cam_trans;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator1> & lhs, const ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace aruco_hand_eye

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c47a15d4529b441b5135e0cc3d6db0f";
  }

  static const char* value(const ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c47a15d4529b441ULL;
  static const uint64_t static_value2 = 0xb5135e0cc3d6db0fULL;
};

template<class ContainerAllocator>
struct DataType< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aruco_hand_eye/hand_eye_calibrationResponse";
  }

  static const char* value(const ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool                    is_done\n"
"float64[]             end2cam_trans\n"
"\n"
"\n"
;
  }

  static const char* value(const ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_done);
      stream.next(m.end2cam_trans);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct hand_eye_calibrationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aruco_hand_eye::hand_eye_calibrationResponse_<ContainerAllocator>& v)
  {
    s << indent << "is_done: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_done);
    s << indent << "end2cam_trans[]" << std::endl;
    for (size_t i = 0; i < v.end2cam_trans.size(); ++i)
    {
      s << indent << "  end2cam_trans[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.end2cam_trans[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARUCO_HAND_EYE_MESSAGE_HAND_EYE_CALIBRATIONRESPONSE_H