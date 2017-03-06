/*
    Copyright 2011-2014 David Fritz, Brian Gordon, Wira Mulia

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

 */

package plptool.mips.visualizer;

import plptool.gui.ProjectDriver;
import plptool.*;
import plptool.mips.*;
import javax.swing.*;
import javax.imageio.*;
import java.awt.image.*;
import java.awt.*;
import java.net.*;
import java.io.*;

/**
 *
 * @author wira
 */
public class MemoryVisualization extends javax.swing.JFrame {

    private ProjectDriver plp;
    private SimCore sim;
    private DrawPanel canvas;
    private BufferedImage img;

    private int frameID = -1;

    protected long startAddr = -1;
    protected long endAddr = -1;

    /** Creates new form MemoryVisualization */
    public MemoryVisualization(ProjectDriver plp) {
        initComponents();
        canvas = new DrawPanel(plp);
        canvas.setSize(container.getWidth(), container.getHeight());
        container.add(canvas);
        container.revalidate();
        this.sim = (SimCore) plp.sim;
        this.plp = plp;
        this.setIconImage(java.awt.Toolkit.getDefaultToolkit().getImage(this.getClass().getResource("resources/toolbar_memvis.png")));
    }

    public void setFrameID(int id) {
        this.frameID = id;
    }

    public void setBG(String path) {
        try {
            URL u = new URL(path);
            img = ImageIO.read(u);

        } catch(Exception e) {
            Msg.E("Unable to fetch background image.", Constants.PLP_OK, null);
        }
    }
    
    public void updateVisualization() {
        canvas.repaint();
    }

    public void visualize() {
        btnVisualizeActionPerformed(null);
    }
    
    public Long[] getAddresses() {
        Long[] ret = {startAddr, endAddr};

        return ret;
    }

    public void setAddresses(Long[] addresses) {
        txtStartAddr.setText(String.format("0x%08x", addresses[0]));
        long offset = addresses[1] - addresses[0];
        txtOffset.setText("" + offset);
    }

    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        txtStartAddr = new javax.swing.JTextField();
        txtOffset = new javax.swing.JTextField();
        btnVisualize = new javax.swing.JButton();
        container = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
        org.jdesktop.application.ResourceMap resourceMap = org.jdesktop.application.Application.getInstance(plptool.gui.PLPToolApp.class).getContext().getResourceMap(MemoryVisualization.class);
        setTitle(resourceMap.getString("Form.title")); // NOI18N
        setName("Form"); // NOI18N
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowClosing(java.awt.event.WindowEvent evt) {
                formWindowClosing(evt);
            }
        });

        txtStartAddr.setText(resourceMap.getString("txtStartAddr.text")); // NOI18N
        txtStartAddr.setName("txtStartAddr"); // NOI18N
        txtStartAddr.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                txtStartAddrKeyPressed(evt);
            }
        });

        txtOffset.setText(resourceMap.getString("txtOffset.text")); // NOI18N
        txtOffset.setName("txtOffset"); // NOI18N
        txtOffset.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                txtOffsetKeyPressed(evt);
            }
        });

        btnVisualize.setText(resourceMap.getString("btnVisualize.text")); // NOI18N
        btnVisualize.setName("btnVisualize"); // NOI18N
        btnVisualize.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnVisualizeActionPerformed(evt);
            }
        });

        container.setBackground(resourceMap.getColor("container.background")); // NOI18N
        container.setName("container"); // NOI18N

        javax.swing.GroupLayout containerLayout = new javax.swing.GroupLayout(container);
        container.setLayout(containerLayout);
        containerLayout.setHorizontalGroup(
            containerLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 446, Short.MAX_VALUE)
        );
        containerLayout.setVerticalGroup(
            containerLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 454, Short.MAX_VALUE)
        );

        jLabel1.setText(resourceMap.getString("jLabel1.text")); // NOI18N
        jLabel1.setName("jLabel1"); // NOI18N

        jLabel2.setText(resourceMap.getString("jLabel2.text")); // NOI18N
        jLabel2.setName("jLabel2"); // NOI18N

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(container, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtStartAddr, javax.swing.GroupLayout.PREFERRED_SIZE, 128, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel2)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(txtOffset, javax.swing.GroupLayout.PREFERRED_SIZE, 140, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(btnVisualize, javax.swing.GroupLayout.PREFERRED_SIZE, 120, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(16, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel1)
                    .addComponent(jLabel2))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txtStartAddr, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(txtOffset, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btnVisualize))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(container, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnVisualizeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnVisualizeActionPerformed
        try {
            long addr = plp.asm.resolveAddress(txtStartAddr.getText());
            long base = (addr == -1) ? PLPToolbox.parseNum(txtStartAddr.getText()) : addr;
            long offset = PLPToolbox.parseNum(txtOffset.getText());

            if(offset < 0) {
                startAddr = base + offset;
                endAddr = base;
            } else {
                startAddr = base;
                endAddr = base + offset;
            }

            ((plptool.mips.SimCoreGUI) plp.g_sim).updateAttributeForMemoryVisualizers();
            updateVisualization();
        } catch(Exception e) {

        }
    }//GEN-LAST:event_btnVisualizeActionPerformed

    private void txtStartAddrKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_txtStartAddrKeyPressed
        if(evt.getKeyCode() == java.awt.event.KeyEvent.VK_ENTER)
            btnVisualizeActionPerformed(null);
    }//GEN-LAST:event_txtStartAddrKeyPressed

    private void txtOffsetKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_txtOffsetKeyPressed
        if(evt.getKeyCode() == java.awt.event.KeyEvent.VK_ENTER)
            btnVisualizeActionPerformed(null);
    }//GEN-LAST:event_txtOffsetKeyPressed

    private void formWindowClosing(java.awt.event.WindowEvent evt) {//GEN-FIRST:event_formWindowClosing
        ((plptool.mips.SimCoreGUI) plp.g_sim).disposeMemoryVisualizer(frameID);
    }//GEN-LAST:event_formWindowClosing


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnVisualize;
    private javax.swing.JPanel container;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JTextField txtOffset;
    private javax.swing.JTextField txtStartAddr;
    // End of variables declaration//GEN-END:variables

    class DrawPanel extends JPanel {
        private ProjectDriver plp;
        private long oldSpVal;

        private int spPointerX0and1;
        private int spPointerX2;
        private int spPointerY0;
        private int spPointerY1;
        private int spPointerY2;

        private Color cUnmapped = new Color(255, 175, 175);
        private Color cProgram = new Color(175, 200, 255);
        private Color cData = new Color(200, 255, 175);
        private Color cUninitialized = new Color(225, 225, 225);

        public DrawPanel(ProjectDriver plp) {
            super();
            oldSpVal = -1;
            this.plp = plp;
        }

        @Override
        public void paint(Graphics g) {
            g.setFont(new Font(plptool.Config.devFont, Font.BOLD, plptool.Config.devFontSize));
            FontMetrics fm = g.getFontMetrics();
            int addrStrOffset = fm.stringWidth("0x00000000");
            this.setSize(this.getParent().getWidth(), this.getParent().getHeight());
            int W = this.getWidth();
            int H = this.getHeight();
            int fontHeight = g.getFontMetrics().getDescent();
            long locs = (endAddr - startAddr) / 4 + 1;
            int topOffset = fm.getHeight() + 10;
            int rightOffset = 50;

            g.setColor(Color.white);
            g.fillRect(0, 0, W, H);
            g.setColor(new Color(240, 240, 240));
            g.fillRect(0, 1, W, topOffset - 1);
            g.setColor(Color.black);
            g.drawString("Contents", W - 10 - addrStrOffset - rightOffset, 4 + fm.getHeight());
            g.drawString("Address", W - 30 - 2*addrStrOffset - rightOffset, 4 + fm.getHeight());
            g.drawString("$sp", W - 40 - 2*addrStrOffset - 30 - rightOffset - fm.stringWidth("$sp"), 4 + fm.getHeight());


            if(img != null) {
                g.drawImage(img, 0, 0, null);
            }

            if(locs < 1 || startAddr < 0 || endAddr < 0)
                return;

            // if the user wants to see more than 32 memory locations, we do
            // a special case
            int yScaleFactor = 5;
            while(locs > Math.pow(2, yScaleFactor) && yScaleFactor < 32)
                yScaleFactor++;

            // too big, user wants to visualize more than 32-bit address space
            if(yScaleFactor == 32)
                return;
            
            long addrOffset = 4;
            if(yScaleFactor > 5) {
                locs /= (long) Math.pow(2, yScaleFactor - 5);
                addrOffset *= Math.pow(2, yScaleFactor - 5);
            }

            int rowH = (H - topOffset) / (int) locs;
            int stringYOffset = (rowH - fontHeight) / 2 + fontHeight;
            boolean drawStr = (rowH > stringYOffset);

            for(int i = 0; i < locs; i++) {
                boolean isMapped = true;

                Long spVal = sim.regfile.read(29);
                if(spVal == null) spVal = oldSpVal;
                if(spVal >= 0 && spVal >= startAddr + addrOffset*i && spVal < startAddr + addrOffset*i + addrOffset) {
                    g.setColor(Color.red);
                    int xPoints[] = {W - 40 - 2*addrStrOffset - 30 - rightOffset, W - 40 - 2*addrStrOffset - 30 - rightOffset, W - 40 - 2*addrStrOffset - 10 - rightOffset};
                    int yPoints[] = {topOffset + i*rowH + rowH / 2 - 5, topOffset + i*rowH + rowH / 2 + 5, topOffset + i*rowH + rowH / 2};
                    g.fillPolygon(xPoints, yPoints, 3);
                    oldSpVal = spVal;
                }
                
                if (!sim.bus.isMapped(startAddr + addrOffset*i)) {
                    g.setColor(cUnmapped);
                    isMapped = false;
                } else if(sim.bus.isInstr(startAddr + addrOffset*i))
                    g.setColor(cProgram);
                else if (!sim.bus.isInitialized(startAddr + addrOffset*i))
                    g.setColor(cUninitialized);
                else
                    g.setColor(cData);

                g.fillRect(W - 20 - addrStrOffset - rightOffset, topOffset + i * rowH, 20 + addrStrOffset, rowH);
                g.setColor(new Color(220, 220, 220));
                g.drawLine(0, topOffset + (i+1) * rowH, W, topOffset + (i+1) * rowH);

                if(drawStr) {
                    if(yScaleFactor <= 5 && isMapped) {
                        g.setColor(Color.black);
                        g.drawString(String.format("0x%08x", plp.sim.bus.read(startAddr + addrOffset*i)), W - 10 - addrStrOffset - rightOffset, topOffset + i*rowH + stringYOffset);
                    }
                    g.setColor(plp.sim.visibleAddr == startAddr + addrOffset*i ? Color.red : Color.black);
                    g.drawString(String.format("0x%08x", startAddr + addrOffset*i), W - 10 - 2*addrStrOffset - 20 - rightOffset, topOffset + i*rowH + stringYOffset);
                }
            }

            g.setColor(Color.red);
            if(yScaleFactor >= 23)
                g.drawString((int) (Math.pow(2, (yScaleFactor - 23))) + " Mbytes / div", 5, topOffset + fm.getDescent() + 10);
            else if(yScaleFactor >= 13)
                g.drawString((int) (Math.pow(2, (yScaleFactor - 13))) + " Kbytes / div", 5, topOffset + fm.getDescent() + 10);
            else
                g.drawString((int) (Math.pow(2, (yScaleFactor - 5))) * 4 + " bytes / div", 5, topOffset + fm.getDescent() + 10);

            g.drawString(locs + " entries", 5, topOffset + 2*fm.getDescent() + 20);
        }
    }
}


