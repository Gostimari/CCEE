function update_draw(q,obj)
    lp = 0.5;
    r = 0.1;
    theta = q(1);
    v = q(2);
    p1 = [
     0 0 0
     cos(theta)*r sin(theta)*r 0
    ];
    R = [cos(theta+pi/2) -sin(theta+pi/2) 0
        sin(theta+pi/2) cos(theta+pi/2) 0
        0 0 1];
    T = [R p1(2,:)';[0 0 0 1]];
    P = [
        0 0 0 1
        sin(v)*lp 0 cos(v)*lp 1
    ];
    aux = T*P';
    p2 =aux(1:3,:)';
    
    obj(2).XData = p1(:,1);
    obj(3).XData = p2(:,1);
    
    obj(2).YData = p1(:,2);
    obj(3).YData = p2(:,2);
    
    obj(2).ZData = p1(:,3);
    obj(3).ZData = p2(:,3);
    drawnow;
    %pause(5/5012);
end