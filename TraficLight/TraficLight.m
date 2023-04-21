clc

%x=[20 30 30 20 20];
%y=[30 30 70 70 30];
rectangle('position',[20 40 12 60],'FaceColor',[0 0 0]);
rectangle('position',[25 15 2 25],'FaceColor',[0 0 0 ]);
while true
    
rectangle('position',[22.5 83 7 15],'curvature',[1 1],'FaceColor',[1 0 0]);
rectangle('position',[22.5 63 7 15],'curvature',[1 1],'FaceColor',[0.2 0.2 0.2]);
rectangle('position',[22.5 43 7 15],'curvature',[1 1],'FaceColor',[0.2 0.2 0.2]);
xlim([0 50]),ylim([0 100]); 
axis=([-10 100 -10 100]);
pause(3);

rectangle('position',[22.5 83 7 15],'curvature',[1 1],'FaceColor',[0.2 0.2 0.2]);
rectangle('position',[22.5 63 7 15],'curvature',[1 1],'FaceColor',[1 1 0]);
rectangle('position',[22.5 43 7 15],'curvature',[1 1],'FaceColor',[0.2 0.2 0.2]);

pause(3);

rectangle('position',[22.5 83 7 15],'curvature',[1 1],'FaceColor',[0.2 0.2 0.2]);
rectangle('position',[22.5 63 7 15],'curvature',[1 1],'FaceColor',[0.2 0.2 0.2]);
rectangle('position',[22.5 43 7 15],'curvature',[1 1],'FaceColor',[0 1 0]);

pause(3);

end
%plot(x,y);
%fill(x,y,[0 0 0]);
xlim([0 50]),ylim([0 100]); 
axis=([-10 100 -10 100]);
