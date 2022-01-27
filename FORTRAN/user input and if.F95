program chooseoperation
  implicit none
  integer            :: num
  real               :: X,Y
  X=3.4 !Intializing X
  Y=2.9 !Intializing Y
  print*,"Enter one number" !Taking user input
  read *, num
  IF (num == 1) THEN !If 1 then prints multiplication of X and Y
    print*,X*Y
  ELSE IF (num == 2) THEN !If 2 then prints division of X and Y
    print*,X/Y
  ELSE IF (num == 3) THEN !If 3 then prints addition of X and Y
    print*,X+Y
END IF
end program chooseoperation