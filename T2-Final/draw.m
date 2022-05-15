function obj = draw(q)
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
    figure;cla;
    obj = plot3([0 0],[0 0],[-1 0],p1(:,1),p1(:,2),p1(:,3),'-o',p2(:,1),p2(:,2),p2(:,3),'-o','Color','r','MarkerSize',10,'MarkerFaceColor','#D9FFFF');
    grid on;
    xlabel('x')
    ylabel('y')
    zlabel('z')
    axis([-0.8 0.8 -0.8 0.8 -0.8 0.8]);
    view([45 15]);
end